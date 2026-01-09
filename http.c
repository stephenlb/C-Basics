#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <netinet/in.h>
#include <sys/socket.h>

#define PORT 8900

int main() {
    const char* response = "HTTP/1.1 200\r\n123\r\n\r\n";

    // Main entry inboud file descriptor
    // Address Familiy IPv4 / IPv6
    int serverfd = socket(AF_INET, SOCK_STREAM, 0);
    printf("serverfd: %d\n", serverfd);

    // DataGram TUPLE (in IP, out IP, in PORT, out PORT, proto)
    // 0.0.0.0 : 8900
    struct sockaddr_in server_address = {
        AF_INET, INADDR_ANY, htons(PORT)
    };

    bind(serverfd, (struct sockaddr *)&server_address, sizeof(server_address));
    listen(serverfd, 100);

    while (1) {
        int clientfd = accept(serverfd, NULL, NULL);
        printf("clientfd: %d\n", clientfd);
        int diditowrk = send(clientfd, response, strlen(response), 0);
        printf("diditowrk: %d\n", diditowrk);

        //close(clientfd);
        // TODO: listing for incoming connect request
        // accept() here
        //break;
    }
    return 0;
}

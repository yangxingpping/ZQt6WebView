
#include "ZHttpServer.h"
#include "uwebsockets/App.h"

ZHttpServer::ZHttpServer()
{
}

ZHttpServer::~ZHttpServer()
{
}

void ZHttpServer::Start()
{
    uWS::App().get("/*", [](auto* res, auto*/*req*/) {
            res->end("Hello world!");
            }).listen(3000, [](auto* listen_socket) {
                if (listen_socket) {
                    std::cout << "Listening on port " << 3000 << std::endl;
                }
                }).run();
}

void ZHttpServer::Stop()
{
}

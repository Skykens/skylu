//
// Created by jimlu on 2020/6/8.
//
#include "httpserver.h"
#include "skylu/net/eventloop.h"
using namespace skylu;
int main(int agrc,char ** argv)
{
  EventLoop g_loop;
  Address::ptr addr = IPv4Address::Create(nullptr,80);
  HttpServer server(&g_loop,addr,"http server");
  server.setThreadNum(5);
  server.run();

  return 0;

}
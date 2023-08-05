#ifndef JANSONVEGELIUSPLUGIN_H
#define JANSONVEGELIUSPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class JansonVegeliusPlugin : public Plugin
{
public: 
 std::string toString() {return "JansonVegelius";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif

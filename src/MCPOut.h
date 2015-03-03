#include <JeeLib.h>

#ifndef MCPOUT_H
#define MCPOUT_H

class McpOut {

  private:

    enum {
      MCP_IODIR, MCP_IPOL, MCP_GPINTEN, MCP_DEFVAL, MCP_INTCON, MCP_IOCON,
      MCP_GPPU, MCP_INTF, MCP_INTCAP, MCP_GPIO, MCP_OLAT
    };

    const DeviceI2C& device;

    void setup();

  public:

    McpOut(const DeviceI2C& d) : device(d) { setup(); }
    void write(byte);

};

#endif

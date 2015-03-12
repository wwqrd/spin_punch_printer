#include "McpOut.h"

void McpOut::setup() {
  device.send();
  device.write(MCP_IODIR);
  device.write(0);
  device.stop();
}

void McpOut::send(byte value) {
  device.send();
  device.write(MCP_GPIO);
  device.write(value);
  device.stop();
}

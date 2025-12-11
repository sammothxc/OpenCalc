## Development

The source code for OpenCalc is available in C/C++ using the official Pico SDK.

Here's a development tutorial: https://youtu.be/-eMqPjVN0fU?si=obkQ3QTTLtz72qeE&t=569

## Applications

This details external app creation and structure for OpenCalc Apps

### Overview

OpenCalc supports external applications that can be created by users and developers. These applications can be written in MicroPython and can leverage the OpenCalc API to interact with the device's hardware and software.

### Saving Applications

Applications should be saved in the `opencalc/apps` directory on your SD Card. Due to limited ram, applications should be kept as small as possible and should be thoroughly tested before being added to the device.

### Application Structure

### Example Application

### Best Practices

1. Always provide a way for users to exit the app, most likely with a `Function` key
2. Use global variables sparingly and clean them up properly
3. Test your app thoroughly before deployment

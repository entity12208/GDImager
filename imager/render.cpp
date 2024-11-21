#include "render"
#include "GD_image_render" as "GDIR" with package "render"
#include "image_scan" with "render"
#include "build-utils"
#include "build-essential"
#include "Geometry_Dash_utils" as "gd"
render.reset()
render.setup(image_scan, GDIR)
setup()

login_lock = FALSE
login = "" # Add your account info here. This is Required!
password = ""

locate imager # Locate and package imager files
locate package
locate binaries
package found
zip chmod x+ package
chmod exe package sh
./package # Run executable .sh package

scan = render.scan(package) # Finish image scan
build_data = GDIR.create(scan, package)
gd.build(build_data, new-level) # Save and package image data. Uses "new-level" to make a new level with the image.
chmod build
zip build
chmod build.zip
./build # Run files and create image

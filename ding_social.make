core = 7.x
api = 2

projects[instagram_block][subdir] = "contrib"
projects[instagram_block][version] = "1.6"
projects[instagram_block][patch][] = "https://storage.easyting.dk/instagram_block-module_adaptation-EASYOPAC_1385.patch"

projects[fb_autopost][subdir] = "contrib"
projects[fb_autopost][version] = "1.4"
; Patch with bare minimal changes to be able to push posts to Facebook.
projects[fb_autopost][patch][] = "https://storage.easyting.dk/fb-sdk-570.patch"

libraries[facebook-php-sdk][download][type] = "git"
libraries[facebook-php-sdk][download][url] =  "git@github.com:facebookarchive/php-graph-sdk.git"
libraries[facebook-php-sdk][download][tag] = "5.7.0"
libraries[facebook-php-sdk][destination] = "libraries"

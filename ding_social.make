core = 7.x
api = 2

projects[instagram_block][subdir] = "contrib"
projects[instagram_block][download][type] = "git"
projects[instagram_block][download][url] = "http://git.drupal.org/project/instagram_block.git"
projects[instagram_block][download][revision] = "5d03229"

projects[fb_autopost][subdir] = "contrib"
projects[fb_autopost][version] = "1.4"

libraries[facebook-php-sdk][download][type] = "git"
libraries[facebook-php-sdk][download][url] =  "git@github.com:facebookarchive/php-graph-sdk.git"
libraries[facebook-php-sdk][download][tag] = "5.7.0"
libraries[facebook-php-sdk][destination] = "libraries"

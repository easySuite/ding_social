# This file is part of ding_social module.
#
# ding_social module is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
#
# ding_social module is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License along with ding_social module. If not, see <https://www.gnu.org/licenses/>.

# First, require any additional compass plugins installed on your system.
require 'zen-grids'
require 'susy'
# require 'breakpoint'

# Location of the your project's resources.
css_dir         = "css"
sass_dir        = "sass"
extensions_dir  = "sass-extensions"
images_dir      = "images"
javascripts_dir = "js"

# Set this to the root of your project. All resource locations above are
# considered to be relative to this path.
http_path = "/"


# You can select your preferred output style here (can be overridden via the command line):
# output_style = :expanded or :nested or :compact or :compressed
output_style = :expanded

# Pass options to sass. For development, we turn on the FireSass-compatible
# debug_info if the firesass config variable above is true.
sass_options =  {:debug_info => false}

# Ignore line comments when compiling, in order to avoid confusion.
line_comments = false

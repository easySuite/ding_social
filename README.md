# Ding Social
This module contains rules of implementation of social media components into Ding! project.

This module provides settings for integration of Instagram Block module with EasyDDB IPE Filter and automatic posting of nodes to Facebook with Facebook Autopost module.

## Instalation
Go to @/admin/modules page and enable _Ding Social_ module

## Configuration:
### Instagram block
1. Create client app and retrieve User ID and Access Token data from Instagram.
2. On @/admin/config/services/instagram_block page put retrieved data keys.
3. On desired page enter in IPE mode for editing page and add "Instagram Block" in desired region.

For more information on how to authenticate with Instagram read the following documentation:
https://www.drupal.org/node/2746185

### Facebook Autopost
1. Register new app in Faceboook Developers Center and get APP Id and APP secret keys.
2. On page @/admin/config/services/fbautopost, fill the data into "FACEBOOK APP DATA" fieldgroup and save form.
3. On same page will appear "FACEBOOK PAGE INFORMATION" fieldgroup where needs to login to facebook and autorize app with which project will be work.
4. Go to @/admin/config/workflow/rules and enable "Post News to Facebook" rule.
5. Edit "Post News to Facebook" rule and in "Publish to Facebook page" action, edit the value of "FACEBOOK PAGES" section - it have to match with application authorized in step 3.

After step 5 you will have the possibility to post new nodes of type News automaticaly,ectly on facebook page.

## Licence
This module is licensed uder GPLv3.

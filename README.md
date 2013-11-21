Adinch Tracking SDK
===========

The library is for conversion tracking of ads in mobile ad network. Embed in the advertised application to estimate the conversions.

To use the library you need to get the application key from advertiser.


System Frameworks
----------------- 

Add the system frameworks required by the supported tracking SDK:

* UIKit 
* Foundation

Example
------------------

```
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
	[ADTracking setTargetID:@"YOUR_KEY_HERE"];
	
	// Your code here…

	return YES;
} 
```


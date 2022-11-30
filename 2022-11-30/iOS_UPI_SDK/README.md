### iOS UPI SDK

#### Cocoapods Integration


Add to your Podfile. Then run pod install.
	
```
pod 'Alamofire', '4.9.0'
pod 'Braintree', '= 5.16.0', :subspecs => [
    'Core',
    'Card',
    'PayPal',
    'ApplePay',
    'DataCollector',
    'PaymentFlow',
    'PayPalDataCollector',
    'UnionPay',
    'Venmo',
    'ThreeDSecure'
    ]
``` 
 

Drag the following files into your project and set them to `Embed & Sign` in Xcode

  
```
AMS.xcframework
AlipayExt.xcframework
UnionPayExt.xcframework
WechatPayExt.xcframework 
BraintreeDropIn.xcframework
CPaySDK.xcframework
```
  
#### Manual Integration
    
Drag the following files into your project and set them to `Embed & Sign` in Xcode
  
```
Alamofire.xcframework
Braintree.xcframework
CardinalMobile.xcframework
KountDataCollector.xcframework
PPRiskMagnes.xcframework

AMS.xcframework
AlipayExt.xcframework
UnionPayExt.xcframework
WechatPayExt.xcframework 
BraintreeDropIn.xcframework
CPaySDK.xcframework
```


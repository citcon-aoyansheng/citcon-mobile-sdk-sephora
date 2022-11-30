//
//  BraintreeDropInExt.h
//  BraintreeDropIn
//
//  Created by long.zhao on 3/3/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <BraintreeDropIn/BraintreeDropIn.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^CompletionBlock)(NSDictionary *resultDic);

@interface BraintreeDropInExt : NSObject

/**
 * @brief Request a order will popup DropIn UI to complete payment
 *
 * @param order is a NSDictionary object. It must includes following fields if you want to use 3DS verification.
 * @param type is used to indicate which payment method you want to use
 * @param token is generated by Citcon's server used to initialize DropIn UI
 * @param vc is used to display DropIn UI
 * @param completionBlock will be called after get a result from DropIn UI
 *
 * @return NULL
 */
+ (void)payOrder:(NSDictionary *)order
            type:(NSString *)type
           token:(NSString *)token
      controller:(UIViewController *)vc
        callback:(CompletionBlock)completionBlock;

@end

NS_ASSUME_NONNULL_END
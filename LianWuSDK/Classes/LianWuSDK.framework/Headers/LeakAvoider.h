#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
NS_ASSUME_NONNULL_BEGIN
 
@interface LeakAvoider : NSObject<WKScriptMessageHandler>
 
- (instancetype)initWithMessageHandler:(id <WKScriptMessageHandler>)messageHander;
@end
 
NS_ASSUME_NONNULL_END




#import <UIKit/UIKit.h>
#import "AxcAE_TabBarDefine.h"

@interface AxcAE_TabBarBadge : UILabel
// 文字或者数字
@property (nonatomic, strong) NSString *badgeText;
// 为零是否自动隐藏 默认不隐藏
@property(nonatomic, assign)BOOL automaticHidden;
// 气泡高度，默认15
@property(nonatomic, assign)CGFloat badgeHeight;

@end

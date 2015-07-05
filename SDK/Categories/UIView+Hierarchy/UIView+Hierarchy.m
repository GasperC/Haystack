//
//  UIView+Hierarchy.m
//

#import "UIView+Hierarchy.h"

@implementation UIView (Hierarchy)

- (UIView *)hay_parentViewOfType:(Class)class
{
    UIView *view = self.superview;
    
    while (![view isKindOfClass:class] && view != nil)
    {
        view = view.superview;
    }
    
    return view;
}

@end

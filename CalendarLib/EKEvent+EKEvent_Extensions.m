//
//  EKEvent+EKEvent_Extensions.m
//  Calendar
//
//  Created by Alexander Zaytsev on 1/4/22.
//  Copyright © 2022 Julien Martin. All rights reserved.
//

#import "EKEvent+EKEvent_Extensions.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>

@implementation EKEvent (EKEvent_Extensions)

- (UIColor *)getColor {
  UIColor *result = objc_getAssociatedObject(self, "ow_Color");
  return result;
}

- (void)setColor: (UIColor*) color {
    objc_setAssociatedObject(self, "ow_Color", color, OBJC_ASSOCIATION_RETAIN);
}
@end

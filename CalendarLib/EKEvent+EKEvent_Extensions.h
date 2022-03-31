//
//  EKEvent+EKEvent_Extensions.h
//  Calendar
//
//  Created by Alexander Zaytsev on 1/4/22.
//  Copyright © 2022 Julien Martin. All rights reserved.
//

#import <EventKit/EventKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EKEvent (EKEvent_Extensions)

- (UIColor *)getColor;
- (void)setColor: (UIColor*) color;

@end

NS_ASSUME_NONNULL_END

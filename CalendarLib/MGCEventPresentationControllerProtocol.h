//
//  MGCEventPresentationControllerProtocol.h
//  Calendar
//
//  Created by Alexander Zaytsev on 25/3/19.
//  Copyright © 2019 Julien Martin. All rights reserved.
//

#ifndef MGCEventPresentationControllerProtocol_h
#define MGCEventPresentationControllerProtocol_h

#import <EventKit/EventKit.h>
#import <EventKitUI/EventKitUI.h>

@protocol MGCEventPresentationControllerProtocol

@property(nonatomic, weak, nullable) id<EKEventViewDelegate> delegate;

@end
#endif /* MGCEventPresentationControllerProtocol_h */

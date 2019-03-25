//
//  MGCNewEventControllerProtocol.h
//  Calendar
//
//  Created by Alexander Zaytsev on 25/3/19.
//  Copyright © 2019 Julien Martin. All rights reserved.
//

#ifndef MGCNewEventControllerProtocol_h
#define MGCNewEventControllerProtocol_h

#import <EventKit/EventKit.h>
#import <EventKitUI/EventKitUI.h>

@protocol MGCNewEventControllerProtocol

@property(nonatomic, weak, nullable) id<EKEventEditViewDelegate>  editViewDelegate;

@end

#endif /* MGCNewEventControllerProtocol_h */

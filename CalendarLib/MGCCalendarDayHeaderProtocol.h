//
//  MGCCalendarDayHeaderProtocol.h
//  Calendar
//
//  Created by Alexander Zaytsev on 29/4/19.
//  Copyright © 2019 Julien Martin. All rights reserved.
//

#ifndef MGCCalendarDayHeaderProtocol_h
#define MGCCalendarDayHeaderProtocol_h

@protocol MGCCalendarDayHeaderProtocol

/*!
 @abstract  Sets and moves the header view to the given date
 @parameter date the date to be set
 */
- (void)selectDate:(NSDate *)date;

@end

#endif /* MGCCalendarDayHeaderProtocol_h */

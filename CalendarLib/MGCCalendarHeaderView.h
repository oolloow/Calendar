//
//  CalendarHeaderView.h
//  Calendar
//
//  Copyright © 2016 Julien Martin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MGCCalendarDayHeaderProtocol.h"

@class MGCDayPlannerView;

@interface MGCCalendarHeaderView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate, MGCCalendarDayHeaderProtocol>


/*!
	@abstract	The current selected date on the calendar
	@discussion Read only, you can set the visible date via selectDate
 */
@property (nonatomic, readonly) NSDate *selectedDate;

/*!
	@abstract	The header background color
	@discussion Light gray by default
 */
@property (nonatomic, strong) UIColor *headerBackgroundColor;

/*!
	@abstract	Initialization
	@discussion The day planner view instance needs to be passed along
 */
- (instancetype)initWithFrame:(CGRect)frame collectionViewLayout:(UICollectionViewLayout *)layout andDayPlannerView:(MGCDayPlannerView *)dayPlannerView;

@end

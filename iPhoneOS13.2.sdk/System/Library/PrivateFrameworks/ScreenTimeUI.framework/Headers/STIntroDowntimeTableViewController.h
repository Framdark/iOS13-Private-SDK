//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSDateFormatter, STDeviceBedtime;

__attribute__((visibility("hidden")))
@interface STIntroDowntimeTableViewController : UITableViewController
{
    STDeviceBedtime *_bedtime;
    long long _datePickerVisibility;
    NSDateFormatter *_downtimeFormatter;
}

@property(readonly) NSDateFormatter *downtimeFormatter; // @synthesize downtimeFormatter=_downtimeFormatter;
@property long long datePickerVisibility; // @synthesize datePickerVisibility=_datePickerVisibility;
@property(readonly) STDeviceBedtime *bedtime; // @synthesize bedtime=_bedtime;
- (void)_datePickerChanged:(id)arg1;
- (long long)_tableRowForDatePicker;
- (long long)_tableRowForEndLabelRow;
- (long long)_tableRowForStartLabelRow;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_stIntroDowntimeTableViewControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;

@end

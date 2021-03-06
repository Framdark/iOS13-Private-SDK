//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKDisplayType, HKUnitPreferenceController, NSArray, NSDate, NSDictionary, WDProfile;

__attribute__((visibility("hidden")))
@interface WDAddDataViewController : HKTableViewController <WDUserActivityResponder>
{
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKUnitPreferenceController *_unitController;
    NSArray *_tableViewCellsBySection;
    NSDictionary *_manualEntryItems;
    NSDate *_initialStartDate;
}

@property(retain, nonatomic) NSDate *initialStartDate; // @synthesize initialStartDate=_initialStartDate;
// - (void).cxx_destruct;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (id)defaultEditingItem;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (id)defaultMetadata;
- (id)generateHKObjects;
- (void)validateDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)saveHKObjectWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)validateMaximumAllowedDurationFor:(id)arg1 endDate:(id)arg2 competion:(id /* CDUnknownBlockType */)arg3;
- (void)reloadManualEntryItemsAndReloadTableView:(BOOL)arg1;
- (void)reloadManualEntryItems;
- (void)_loadTableViewCellsBySectionIfNecessary;
- (void)_dataValidated;
- (void)_showValidationConfirmAlertWithErrorString:(id)arg1;
- (void)_showValidationErrorAlertWithErrorString:(id)arg1;
- (void)addButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
@property(nonatomic) BOOL savingEnabled;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;

@end


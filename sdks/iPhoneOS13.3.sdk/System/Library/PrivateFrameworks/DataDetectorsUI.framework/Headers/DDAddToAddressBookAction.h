//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDAddressAction.h>

__attribute__((visibility("hidden")))
@interface DDAddToAddressBookAction : DDAddressAction
{
}

+ (BOOL)actionAvailableForContact:(id)arg1;
- (id)notificationURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)contact;
- (void)adaptForPresentationInPopover:(BOOL)arg1;
- (void)prepareViewControllerForActionController:(id)arg1;
- (int)interactionType;
- (id)localizedName;
- (void)invalidate;

@end

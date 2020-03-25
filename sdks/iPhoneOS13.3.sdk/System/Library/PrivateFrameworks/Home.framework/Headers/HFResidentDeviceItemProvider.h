//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFResidentDeviceItemProvider : HFItemProvider
{
    id /* CDUnknownBlockType */ _filter;
    HMHome *_home;
    NSMutableSet *_residentDeviceItems;
}

@property(retain, nonatomic) NSMutableSet *residentDeviceItems; // @synthesize residentDeviceItems=_residentDeviceItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) id /* CDUnknownBlockType */ filter; // @synthesize filter=_filter;
// - (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)arg1;
- (id)init;

@end

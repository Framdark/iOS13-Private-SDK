//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HFUserItem, HULocationDeviceManager, HUPresenceCurrentUserLocationDevice;

@interface HUPresenceUserOptionItem : HFItem
{
    HFUserItem *_userItem;
    HULocationDeviceManager *_locationDeviceManager;
    HUPresenceCurrentUserLocationDevice *_selectedLocationDevice;
}

@property(retain, nonatomic) HUPresenceCurrentUserLocationDevice *selectedLocationDevice; // @synthesize selectedLocationDevice=_selectedLocationDevice;
@property(readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // @synthesize locationDeviceManager=_locationDeviceManager;
@property(readonly, nonatomic) HFUserItem *userItem; // @synthesize userItem=_userItem;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithUserItem:(id)arg1 selectedLocationDevice:(id)arg2 locationDeviceManager:(id)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TLCapabilitiesManager : NSObject
{
    BOOL _isRingtoneStoreAvailable;
    BOOL _isAlertToneStoreAvailable;
    NSDictionary *_deviceCodeNameSimplicationMapping;
}

+ (id)sharedCapabilitiesManager;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isHomePod) BOOL homePod;
@property(readonly, nonatomic) NSString *simplifiedDeviceCodeName;
@property(readonly, nonatomic) NSString *deviceCodeName;
@property(readonly, nonatomic) BOOL hasUserGeneratedVibrationsCapability;
@property(readonly, nonatomic) BOOL hasSynchronizedVibrationsCapability;
@property(readonly, nonatomic) BOOL hasVibratorCapability;
@property(readonly, nonatomic) BOOL wantsModernDefaultRingtone;
@property(readonly, nonatomic, getter=isAlertToneStoreAvailable) BOOL alertToneStoreAvailable;
@property(readonly, nonatomic, getter=isRingtoneStoreAvailable) BOOL ringtoneStoreAvailable;
- (void)_handleStoreAvailableItemKindsChangedNotification:(id)arg1;
- (void)_updateRingtoneStoreAvailabilityWithAvailableKinds:(id)arg1 error:(id)arg2;
- (void)_checkRingtoneStoreAvailability;
- (BOOL)_hasTelephonyCapability;
- (void)dealloc;
- (id)init;

@end


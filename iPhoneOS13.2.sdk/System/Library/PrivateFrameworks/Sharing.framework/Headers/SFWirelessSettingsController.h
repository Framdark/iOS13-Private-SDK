//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SFWirelessSettingsControllerDelegate;

@interface SFWirelessSettingsController : NSObject
{
    id _delegate;
    _Bool _wifiEnabled;
    _Bool _airplaneModeEnabled;
    _Bool _bluetoothEnabled;
    _Bool _deviceSupportsWAPI;
    _Bool _firstCallbackCompleted;
    _Bool _wirelessCarPlayEnabled;
    _Bool _wirelessAccessPointEnabled;
    struct __SFOperation *_information;
}

@property __weak id <SFWirelessSettingsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidate;
- (void)dealloc;
@property(readonly, getter=isWirelessCarPlayEnabled) _Bool wirelessCarPlayEnabled;
@property(getter=isWirelessAccessPointEnabled) _Bool wirelessAccessPointEnabled;
@property(readonly) _Bool deviceSupportsWAPI;
@property(getter=isAirplaneModeEnabled) _Bool airplaneModeEnabled;
@property(getter=isBluetoothEnabled) _Bool bluetoothEnabled;
@property(getter=isWifiEnabled) _Bool wifiEnabled;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;

@end

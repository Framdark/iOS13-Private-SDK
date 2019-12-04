//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BiometricKit/BKDevice.h>

@protocol BKDevicePearlDelegate;

@interface BKDevicePearl : BKDevice
{
    long long _pearlState;
}

@property(readonly, nonatomic) long long pearlState; // @synthesize pearlState=_pearlState;
- (_Bool)clearIdentityMigrationFailureForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)queryIdentityMigrationFailureForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)fieldDiagnosticsTatsuManifestWithError:(id *)arg1;
- (id)fieldDiagnosticsEncryptionKeyWithError:(id *)arg1;
- (id)fieldDiagnosticsRemainingTimeWithError:(id *)arg1;
- (_Bool)disableFieldDiagnosticsWithError:(id *)arg1;
- (_Bool)enableFieldDiagnosticsWithTatsuManifest:(id)arg1 error:(id *)arg2;
- (id)generateFieldDiagnosticsNonceWithError:(id *)arg1;
- (id)eligibleForAugmentation:(id)arg1 error:(id *)arg2;
- (_Bool)setTemplate:(id)arg1 forIdentity:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(nonatomic) __weak id <BKDevicePearlDelegate> delegate; // @dynamic delegate;

@end

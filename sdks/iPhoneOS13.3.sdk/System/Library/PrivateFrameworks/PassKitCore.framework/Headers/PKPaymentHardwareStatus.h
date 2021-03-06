//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PKPaymentHardwareStatus : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _hasSecureElement;
    BOOL _hasRemoteDevices;
    BOOL _inFailForward;
    BOOL _canMakeRemotePayments;
    BOOL _canDecryptBAAEncryptedData;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL canDecryptBAAEncryptedData; // @synthesize canDecryptBAAEncryptedData=_canDecryptBAAEncryptedData;
@property(nonatomic) BOOL canMakeRemotePayments; // @synthesize canMakeRemotePayments=_canMakeRemotePayments;
@property(nonatomic, getter=isInFailForward) BOOL inFailForward; // @synthesize inFailForward=_inFailForward;
@property(nonatomic) BOOL hasRemoteDevices; // @synthesize hasRemoteDevices=_hasRemoteDevices;
@property(nonatomic) BOOL hasSecureElement; // @synthesize hasSecureElement=_hasSecureElement;
@property(readonly, nonatomic, getter=_isDemoModeActive) BOOL _isDemoModeActive;
@property(readonly, nonatomic) BOOL canMakeLocalPayments;
@property(readonly, nonatomic) BOOL canMakePayments;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;

@end


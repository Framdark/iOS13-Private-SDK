//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIdentity-Protocol.h>

@class NSString;
@protocol CRKCertificate, CRKPrivateKey;

@interface CRKConcreteIdentity : NSObject <CRKIdentity>
{
    struct __SecIdentity _underlyingIdentity;
}

+ (id)identityWithCertificate:(id)arg1 privateKey:(id)arg2;
+ (id)identityWithConfiguration:(id)arg1;
@property(readonly, nonatomic) struct __SecIdentity underlyingIdentity; // @synthesize underlyingIdentity=_underlyingIdentity;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <CRKPrivateKey> privateKey;
@property(readonly, nonatomic) id <CRKCertificate> certificate;
- (id)initWithIdentity:(struct __SecIdentity )arg1;
- (void)dealloc;

@end


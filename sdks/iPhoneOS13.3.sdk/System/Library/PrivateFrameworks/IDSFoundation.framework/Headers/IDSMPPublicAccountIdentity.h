//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPPublicAccountIdentity : IDSMPIdentity
{
}

+ (id)publicAccountIdentitywithDataRepresentation:(id)arg1 error:(id )arg2;
- (id)dataRepresentationWithError:(id )arg1;
- (BOOL)verifySignature:(id)arg1 ofData:(id)arg2 error:(id )arg3;
@property(readonly, nonatomic) NSData *publicName;

@end

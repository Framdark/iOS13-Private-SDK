//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface _SFCiphertext : NSObject <NSCopying, NSSecureCoding>
{
    id _ciphertextInternal;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
@property(readonly) NSData *ciphertext;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCiphertext:(id)arg1;

@end


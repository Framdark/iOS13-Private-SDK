//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class _SFSymmetricKey, _SFSymmetricKeySpecifier;

@protocol SFKeyDerivingOperation <NSObject, NSCopying, NSSecureCoding>
+ (long long)keySource;
- (_SFSymmetricKey *)deriveKeyWithSpecifier:(_SFSymmetricKeySpecifier *)arg1 fromKeySource:(id)arg2 error:(id )arg3;
@end


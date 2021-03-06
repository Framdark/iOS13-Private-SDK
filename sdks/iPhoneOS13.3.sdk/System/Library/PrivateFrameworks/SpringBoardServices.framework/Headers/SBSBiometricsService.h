//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSBiometricsService : SBSAbstractSystemService
{
}

- (void)_acquireBiometricAssertionOfType:(unsigned char)arg1 assertionName:(id)arg2 reason:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)acquireWalletPreArmSuppressionAssertionForReason:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)acquireUnlockSuppressionAssertionForReason:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchUnlockCredentialSetWithCompletion:(id /* CDUnknownBlockType */)arg1;

@end


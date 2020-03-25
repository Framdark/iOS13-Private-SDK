//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISBiometricStore, ISDialog, ISTouchIDDialog, SSBiometricAuthenticationContext;

@interface ISBiometricSignatureOperation : ISOperation
{
    id /* CDUnknownBlockType */ _outputBlock;
    ISBiometricStore *_biometricStore;
    SSBiometricAuthenticationContext *_context;
    ISDialog *_fallbackDialog;
    ISTouchIDDialog *_touchIDDialog;
}

@property(retain, nonatomic) ISTouchIDDialog *touchIDDialog; // @synthesize touchIDDialog=_touchIDDialog;
@property(retain, nonatomic) ISDialog *fallbackDialog; // @synthesize fallbackDialog=_fallbackDialog;
@property(retain) SSBiometricAuthenticationContext *context; // @synthesize context=_context;
@property(retain, nonatomic) ISBiometricStore *biometricStore; // @synthesize biometricStore=_biometricStore;
@property(copy) id /* CDUnknownBlockType */ outputBlock; // @synthesize outputBlock=_outputBlock;
// - (void).cxx_destruct;
- (BOOL)_promptUserToAuthenticateForIdentityMapChangeWithAccountIdentifier:(id)arg1 accountName:(id)arg2;
- (void)run;
- (id)initWithBiometricAuthenticationContext:(id)arg1 touchIDDialog:(id)arg2 fallbackDialog:(id)arg3;

@end

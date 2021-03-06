//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/ECMailAccount-Protocol.h>

@class ACAccount, NSString;

@protocol EDAccount <ECMailAccount>
@property(readonly, nonatomic) BOOL primaryiCloudAccount;
@property(readonly, copy, nonatomic) NSString *statisticsKind;
@property(readonly, copy, nonatomic) ACAccount *systemAccount;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)savePersistentAccount;
- (BOOL)hasPasswordCredential;
- (BOOL)canAuthenticateWithCurrentCredentials;
- (NSString *)username;
- (NSString *)hostname;
- (NSString *)displayName;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class PKPassFooterContentView;

@protocol PKPassFooterContentViewDelegate 
- (void)passFooterContentViewDidChangePileSuppressionRequirement:(PKPassFooterContentView *)arg1;
- (unsigned long long)suppressedContentForContentView:(PKPassFooterContentView *)arg1;
- (_Bool)isPassFooterContentViewInGroup:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidChangeCoachingState:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidChangeUserIntentRequirement:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewRequestsSessionSuppression:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidAuthenticate:(PKPassFooterContentView *)arg1;
@end

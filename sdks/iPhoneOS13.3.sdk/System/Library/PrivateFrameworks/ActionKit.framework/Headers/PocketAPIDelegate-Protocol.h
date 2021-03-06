//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSError, NSString, NSURL, PocketAPI;

@protocol PocketAPIDelegate <NSObject>

@optional
- (void)pocketAPI:(PocketAPI *)arg1 requestedOpenURL:(NSURL *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)pocketAPIDidFinishLogin:(PocketAPI *)arg1;
- (void)pocketAPIDidStartLogin:(PocketAPI *)arg1;
- (void)pocketAPI:(PocketAPI *)arg1 receivedResponse:(NSDictionary *)arg2 forAPIMethod:(NSString *)arg3 error:(NSError *)arg4;
- (void)pocketAPI:(PocketAPI *)arg1 failedToSaveURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)pocketAPI:(PocketAPI *)arg1 savedURL:(NSURL *)arg2;
- (void)pocketAPI:(PocketAPI *)arg1 hadLoginError:(NSError *)arg2;
- (void)pocketAPILoggedIn:(PocketAPI *)arg1;
- (void)pocketAPI:(PocketAPI *)arg1 receivedRequestToken:(NSString *)arg2;
@end


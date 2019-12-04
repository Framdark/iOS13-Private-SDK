//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FAFamilyCircleRequestConnectionProvider;

@interface FAFamilyCircleRequest : NSObject
{
    NSString *_usernameOrDSID;
    NSString *_passwordOrToken;
    id <FAFamilyCircleRequestConnectionProvider> _connectionProvider;
}

@property(retain, nonatomic) id <FAFamilyCircleRequestConnectionProvider> connectionProvider; // @synthesize connectionProvider=_connectionProvider;
@property(copy) NSString *passwordOrToken; // @synthesize passwordOrToken=_passwordOrToken;
@property(copy) NSString *usernameOrDSID; // @synthesize usernameOrDSID=_usernameOrDSID;
- (id)requestOptions;
- (id)serviceRemoteObjectWithErrorHandler:(id /* block */)arg1;
- (id)serviceConnection;
- (id)initWithConnectionProvider:(id)arg1;
- (id)init;

@end

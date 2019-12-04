//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSData, NSError, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionDataTask;

@interface VUIURLRequestOperation : VUIAsynchronousOperation
{
    NSURLRequest *_request;
    NSData *_data;
    NSURLResponse *_response;
    NSError *_error;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
    unsigned long long _taskStartTime;
}

@property(nonatomic) unsigned long long taskStartTime; // @synthesize taskStartTime=_taskStartTime;
@property(copy, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(copy, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)_handleResponse:(id)arg1 responseData:(id)arg2 error:(id)arg3;
- (void)cancel;
- (void)executionDidBegin;
@property(readonly, nonatomic) unsigned long long elapsedTimeInMilliseconds;
- (id)initWithRequest:(id)arg1 session:(id)arg2;
- (id)initWithRequest:(id)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOProtobufSessionTaskDelegate-Protocol.h>

@class GEOProtobufSession, GEOProtobufSessionTask, NSString;

@interface GEORPProblemProvider : NSObject <GEOProtobufSessionTaskDelegate>
{
    GEOProtobufSession *_protobufSession;
    GEOProtobufSessionTask *_submissionTask;
    GEOProtobufSessionTask *_statusTask;
    id /* block */ _submissionErrorHandler;
    id /* block */ _submissionFinishedHandler;
    id /* block */ _statusErrorHandler;
    id /* block */ _statusFinishedHandler;
}

@property(copy, nonatomic) id /* block */ statusFinishedHandler; // @synthesize statusFinishedHandler=_statusFinishedHandler;
@property(copy, nonatomic) id /* block */ statusErrorHandler; // @synthesize statusErrorHandler=_statusErrorHandler;
@property(copy, nonatomic) id /* block */ submissionFinishedHandler; // @synthesize submissionFinishedHandler=_submissionFinishedHandler;
@property(copy, nonatomic) id /* block */ submissionErrorHandler; // @synthesize submissionErrorHandler=_submissionErrorHandler;
@property(retain, nonatomic) GEOProtobufSessionTask *statusTask; // @synthesize statusTask=_statusTask;
@property(retain, nonatomic) GEOProtobufSessionTask *submissionTask; // @synthesize submissionTask=_submissionTask;
@property(readonly, nonatomic) GEOProtobufSession *protobufSession; // @synthesize protobufSession=_protobufSession;
- (void)cancelRequest;
- (void)startStatusRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)startSubmissionRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (id)init;
- (id)cancelError;
- (void)didCompleteStatusTask;
- (void)didCompleteSubmissionTask;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

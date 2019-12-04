//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManagerUICore/DOCThumbnail-Protocol.h>

@class DOCThumbnailRequest, NSString, UIImage;

@interface DOCIconPromise : NSObject <DOCThumbnail>
{
    UIImage *_icon;
    DOCThumbnailRequest *_request;
}

@property(readonly, nonatomic) _Bool isRepresentativeIcon;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (_Bool)registerGenerationCompletionHandler:(id /* block */)arg1;
- (void)scheduleUpdateIfNeeded;
@property(readonly) _Bool hasFinishedTryingToFetchCorrectThumbnail;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) UIImage *thumbnail;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

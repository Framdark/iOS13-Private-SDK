//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/AVAssetResourceLoaderDelegate-Protocol.h>

@class AVAsset, AVURLAsset, LPAudioProperties, NSData, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface LPAudio : NSObject <AVAssetResourceLoaderDelegate, NSSecureCoding>
{
    NSData *_data;
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;
    AVURLAsset *_asset;
    LPAudioProperties *_properties;
    NSURL *_fileURL;
    NSURL *_streamingURL;
    NSString *_MIMEType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, retain, nonatomic) NSURL *streamingURL; // @synthesize streamingURL=_streamingURL;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
// - (void).cxx_destruct;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
@property(readonly, nonatomic) AVAsset *_asset; // @synthesize _asset;
- (BOOL)_shouldEncodeData;
- (void)_mapDataFromFileURL;
@property(readonly, copy, nonatomic) LPAudioProperties *properties;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) NSUInteger _encodedSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreamingURL:(id)arg1 properties:(id)arg2;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)_initWithAudio:(id)arg1;
- (id)init;

@end


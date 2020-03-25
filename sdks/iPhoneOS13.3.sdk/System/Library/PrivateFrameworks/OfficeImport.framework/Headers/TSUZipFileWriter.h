//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/TSUZipWriter.h>

@protocol TSURandomWriteChannel;

__attribute__((visibility("hidden")))
@interface TSUZipFileWriter : TSUZipWriter
{
    id <TSURandomWriteChannel> _writeChannel;
    id /* CDUnknownBlockType */ _writeChannelCompletionHandler;
}

+ (void)zipDirectoryAtURL:(id)arg1 customDirectoryFilename:(id)arg2 toURL:(id)arg3 queue:(id)arg4 progressHandler:(id /* CDUnknownBlockType */)arg5;
+ (void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
// - (void).cxx_destruct;
- (void)truncateToOffsetImpl:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)prepareWriteChannelWithCloseCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)copyRemainingEntries:(id)arg1 fromArchive:(id)arg2 progress:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)copyEntriesFromZipFileWriter:(id)arg1 readingFromURL:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)initWithZipFileArchive:(id)arg1 options:(NSUInteger)arg2 error:(id )arg3;
- (id)initWithZipFileArchive:(id)arg1 error:(id )arg2;
- (id)initWithURL:(id)arg1 options:(NSUInteger)arg2 error:(id )arg3;
- (id)initWithURL:(id)arg1 error:(id )arg2;

@end


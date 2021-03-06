//
//  DownloadManager.h
//  MangaKeeper
//
//  Created by Florian Morel on 01/01/14.
//  Copyright (c) 2014 Florian Morel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DownloadItem.h"
#import "ProgressDownloadQueue.h"
#import "DownloadManagerDelegate.h"

@interface DownloadManager : NSObject <DownloadManagerDelegate>

@property (strong, nonatomic) NSMutableArray *downloadQueues;
@property (assign, nonatomic) NSInteger connectionsNumber;

+ (id)sharedInstance;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)addQueue:(ProgressDownloadQueue *)queue;
- (void)stopQueue:(ProgressDownloadQueue *)queue;
- (void)removeQueue:(ProgressDownloadQueue *)queue;
- (BOOL)hasPendingDownloads;

@end

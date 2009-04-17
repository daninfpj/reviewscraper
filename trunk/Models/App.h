//
//  App.h
//  Scraper
//
//  Created by David Perry on 20/01/2009.
//  Copyright 2009 Didev Studios. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface App : NSObject
{
	NSMutableDictionary *countries;
	NSString *name;
	NSString *code;
	NSString *artist;
	NSData *image;
	BOOL needsShine;
	BOOL isDownloading;
	BOOL hasDownloadedReviews;
	id downloadDelegate;
}

@property (retain) NSMutableDictionary *countries;
@property (retain) NSString *name;
@property (retain) NSString *code;
@property (retain) NSString *artist;
@property (retain) NSData *image;
@property (assign) BOOL needsShine;
@property (assign) BOOL isDownloading;
@property (assign) BOOL hasDownloadedReviews;

- (id)initWithName:(NSString *)appName appCode:(NSString *)appCode appArtist:(NSString *)appArtist appImage:(NSData *)appImage appShine:(BOOL)appShine;
- (NSString *)filename;
- (void)downloadReviews:(id)delegate;
- (void)cancelDownload;
- (NSInteger)averageRating;
- (NSString *)reviewText;

@end

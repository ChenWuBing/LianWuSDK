
#import <Foundation/Foundation.h>



//Monitor download progress
typedef void (^ProgressHandler)(double progress);

//Monitor download complete
typedef void (^CompletionHandler)();

//Monitor download error
typedef void (^FailureHandler)(NSError *error);

@interface FileDownLoader : NSObject

//DownLoad Remote URL
@property (nonatomic, copy) NSString *remoteURL;

//StorePath To DownLoad
@property (nonatomic, copy) NSString *destinationPath;

//CachePath To DownLoad
@property (nonatomic, copy) NSString *cachePath;

//Whether it is being downloaded
@property (nonatomic, readonly, getter = isDownloading) BOOL Downloading;

@property (nonatomic, copy) ProgressHandler   progressHandler;
@property (nonatomic, copy) CompletionHandler completionHandler;
@property (nonatomic, copy) FailureHandler    failureHandler;

- (void)startDownload;

@end

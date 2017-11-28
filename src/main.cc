// #include <iostream>
// #include <future>
// #include <string>
// #include <g3log/g3log.hpp>
// #include <g3log/logworker.hpp>
#include <nan.h>
#include "spdlog/spdlog.h"

namespace spd = spdlog;

NAN_MODULE_INIT(Init)
{
  auto console = spd::stdout_color_mt("console");
  console->info("Welcome to spdlog!");
  // auto worker = g3::LogWorker::createLogWorker();
  // auto handle = worker->addDefaultLogger("sandeep", "./");
  // // handle.release();
  // g3::initializeLogging(worker.get());

  // // print file name
  // std::future<std::string> log_file_name = handle->call(&g3::FileSink::fileName);
  // std::cout << "The logfile is generated at: " << log_file_name.get()
  //           << std::endl;

  // // start logging
  // LOG(INFO) << "streaming API is as easy as ABC or sanddeeeep " << 123;
  // LOG(INFO) << "streaming API is as easy as ABC or sanddeeeep " << 123;
  // LOG(INFO) << "streaming API is as easy as ABC or sanddeeeep " << 123;
  // LOG(INFO) << "streaming API is as easy as ABC or sanddeeeep " << 123;
  // LOG(INFO) << "streaming API is as easy as ABC or sanddeeeep " << 123;
  // LOG(INFO) << "streaming API is as easy as ABC or sanddeeeep " << 123;
  // Nan::Set(target, Nan::New("isActive").ToLocalChecked(), Nan::GetFunction(Nan::New<v8::FunctionTemplate>(isActive)).ToLocalChecked());
  // Mutex::Init(target);
}

NODE_MODULE(spdlog, Init)
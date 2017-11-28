const g3log = require('g3log');
const worker = new g3log.LogWorker();
const logger = worker.addDefaultLogger('sandeep', './');

g3log.initializeLogging(worker);

logger.fileName.then(filename => console.log('log file created at', filename));

g3log.log('info', 'sandeep and joao hack', 123);

g3log.shutDownLogging();

